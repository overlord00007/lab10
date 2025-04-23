const express = require('express')
const app =express()
const port = 3000

app.get('/:slug',(req,res) => {
    res.send(`hello ${req.params.slug}`)
})

app.listen(port,()=>{
    console.log('example ${port}')
})